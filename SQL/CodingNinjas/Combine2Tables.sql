#known
    # Person
    # address
#Goal
    # Print(firstname, lastname, city, state)
#Goal Constraint
    # Address is optional


SELECT p.firstname, p.lastname, a.city, a.state FROM
person as p LEFT JOIN address as a
on a.personid = p.personid
;