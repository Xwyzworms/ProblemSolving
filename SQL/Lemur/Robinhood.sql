### Known 
    ## Tables :
    ### Trades
    ### Users
## Query List Top 3 cities
    ## Req : Most numbers of completed orders
## Output Req
    # City and numbers of orders
    # Descending orders

## Table Related :
    ## Trades : hasi Order_id and status
    ## users : has email
    ## JOINED : use the user_id

SELECT usr.city, COUNT(trade.order_id) as to FROM trades as trade 
INNER JOIN users as usr 
    ON usr.user_id = trade.user_id
    WHERE trade.status = 'Completed'
GROUP BY (usr.city)
ORDER BY COUNT(trade.user_id) DESC
LIMIT 3
;
