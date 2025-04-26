# pgvecutils

This project is a PostgreSQL extension that provides vector manipulation utilities. I built this just **for learning purposes** to understand how to create PostgreSQL C extensions and work with vector manipulation within the PostgreSQL ecosystem not sure if it becomes valuable or useful in other ways.



## Features

- **Random Vector Generation**: Generate random vectors of arbitrary dimensions, where each element of the vector is a random float between 0 and 1.

## Installation

### Requirements
- PostgreSQL
- [pgvector](https://github.com/pgvector/pgvector)

### Steps to Install

1. Clone the repository:

   ```bash
   git clone https://github.com/TheShubhendra/pgvecutils.git
   cd pgvecutils
   ```

2. Build the extension:

   ```bash
   make
   ```

3. Install the extension:

   ```bash
   make install
   ```

4. Enable the extension in PostgreSQL:

   ```sql
   CREATE EXTENSION pgvecutils;
   ```

## Usage

Once the extension is installed, you can use the `vector_rand` function to generate random vectors in PostgreSQL.

### Example Usage:

To generate a random vector of dimension `5`, run the following SQL query:

```sql
SELECT vector_rand(5);
```

This will return a vector of 5 random float values.

## Development

This extension was built for learning purposes, and I invite anyone interested to explore and contribute. Future improvements could include:
- Adding more vector operations (e.g., addition, dot product, normalization).
- Enhancing random number generation for more control over the distribution.

Feel free to fork the repository and contribute by submitting pull requests.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
