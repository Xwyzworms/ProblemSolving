## KNOWN
    ## only total_trans
## GOALS 
    ## Caclulate the cumulative purchase
        ## Each Product
        ## over time
        ## Chronological Order
    ### Output the 
    ### transaction date, product_type, cum_purchased
## TABLE RELATED 

SELECT trans_date, product_type, COUNT(product_type) from total_trans
GROUP by trans_date, product_type
