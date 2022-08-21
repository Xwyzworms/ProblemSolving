-- Print hacker_id, name, total num challlenges each student
-- sort  total number desc
-- cond : > 1 same challenges, Sort By Hacker ID
-- cond : > 1 Same challenes and < max num challenges craete ( exclude )

SELECT c.hacker_id, h.name, count(c.challenge_id) AS cnt 
FROM Hackers AS h JOIN Challenges AS c ON h.hacker_id = c.hacker_id
GROUP BY c.hacker_id, h.name 
HAVING cnt = (SELECT MAX(temp.cnt) FROM 
                (SELECT COUNT(*) as cnt FROM challenges 
                 GROUP BY hacker_id
                ) as temp)
OR
    cnt in 
    ( SELECT t.cnt FROM (
        SELECT count(*) as cnt FROM challenges 
        GROUP BY hacker_id 
    ) as t
     GROUP BY t.cnt
     having count(t.cnt) = 1  )
ORDER BY cnt DESC, c.hacker_id;