# Known
    # ActorDirector
# Goal
    # Write (actor_id, director_id)
# Goal Consntraint
    # Actor have co_worked with the director atleast 3 times

SELECT a.actor_id, a.director_id FROM ActorDirector as a 
GROUP by a.actor_id, a.director_id
HAVING COUNT(a.director_id) >= 3

;