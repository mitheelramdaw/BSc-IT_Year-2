# A logical view of data

Traits of a ***relational table* (a.k.a entity set)**

> 1. A table is perceived as a two-dimensional structure made up of rows and columns
> 2. Each table row(tuple) is a single entity occurence in the entity set(table)
> 3. Each column is an attribute. Each column has a unique name
> 4. Each intersection of a row + column is considered a single data value
> 5. All values in a column must share the same data format
> 6. Each column has a specific range of values. This is known as the *attribute domain*
> 7. The order of the rows and columns means nothing to the DBMS
> 8. Each table must have an attribute or combo of attributes that uniquely identidies each row

Each table must also have a ***primary key***. The primary key being an attibute (or combination thereof) used to uniquley identify any chosen row
