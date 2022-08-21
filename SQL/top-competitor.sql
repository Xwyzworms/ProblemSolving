# Known
    # Hackers
    # Difficulity
    # Challenges
    # Submissions
# Goals
    # Print hacker_id, name_of_hackers
# Goals Req
    # Print only hacker who achieved full scores for more than 1 celen
    # Order by descending total number of challenges with full score
    # SORT AScending hacker_id if more than 1 hacker received full scores in same number of celen


SELECT fin.hacker_id, h.name FROM 
hackers as h INNER JOIN 
( SELECT c.hacker_id, s.score,  FROM Challenges as c
  INNER JOIN Difficulty as d 
  ON c.difficulty_level = d.difficulty_level INNER JOIN Submissions as s ON s.hacker_id = c.hacker_id
  WHERE s.score = d.score
 ) as fin
GROUP by 
ON h.hacker_id = fin.hacker_id;



