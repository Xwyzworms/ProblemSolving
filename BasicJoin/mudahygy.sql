SELECT s.hacker_id, h.name, sum(s.score) as final_score FROM
    hackers as h INNER JOIN (
        SELECT hacker_id, MAX(score) as score from submissions 
               GROUP BY challenge_id,hacker_id 
    ) as s ON s.hacker_id = h.hacker_id
    GROUP BY s.hacker_id,h.name
    HAVING
        final_score > 0
    ORDER BY final_score DESC, s.hacker_id;