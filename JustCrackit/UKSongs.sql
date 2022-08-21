### Known

### GOAL
    ### Get top 5 songs by daily playes in the UK yesterday
### REQ
    ### Song_id, name


SELECT s.song_id, s.name 
FROM song INNER JOIN daily_plays as p
ON s.song_id = p.Song_id
WHERE country = "UK" AND p.date = CURRENT_DATE - 1
ORDER BY p.plays DESC
LIMIT 5


