SELECT 
    film_id,
    title,
    length,
    SUM(length) OVER (ORDER BY film_id ASC) as total_running,
    SUM(length) OVER() as overall,
    SUM(length) OVER(ORDER BY film_id) * 100.0 / SUM(length) over() as running_percentages 
FROM FILM
order by film_id;