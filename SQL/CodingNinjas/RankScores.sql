# Known

# Goal
    # Write a query to rank scores
# Goal Req
    # if there is a tie between 2 scores, both harus punya same rangking
    # The next vrangking should be the next Consecutive int value

SELECT s1.score,
(SELECT COUNT(DISTINCT s2.score) from scores S2 
    WHERE s1.score <= s2.score
    ) as "RANK"
FROM SCORES s1
ORDER BY s1.score DESC;