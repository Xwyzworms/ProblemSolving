## Known
    ## Events table

### Goals
    ## Get CTR percentage per app_id ( clicks )
    ## Round the percentage up 2 decimal places

### Table Related
    # Events contain the app_id
    # Clicks can be checked at event type

SELECT app_id, ROUND( 100.0 * 
    SUM(CASE WHEN event_type = 'click' THEN 1 ELSE 0 END ) /
    SUM(CASE WHEN event_type = 'impression' THEN 1 ELSE 0 END)
    ,2)
    FROM 
    Events
    WHERE timestamp >= '01/01/2022'
    AND timestamp <= '12/31/2022'
    GROUP By app_id