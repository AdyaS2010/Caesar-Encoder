# Caesar Cipher Encoder

## Description
This project is a simple Caesar Cipher Encoder written in C. It allows users to encode messages by shifting the letters of the alphabet by a specified number of positions. Note that this implementation only supports encoding, not decoding.

## Features
- Encode messages with a custom shift value
- Supports both uppercase and lowercase letters
- Ignores non-alphabetic characters

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/caesar-cipher-encoder.git
   ```
2. Navigate to the project directory:
   ```bash
   cd caesar-cipher-encoder
   ```
3. Compile the code:
   ```bash
   make caesar
   ```

## Usage
1. Run the application:
   ```bash
   ./caesar key
   ```
   Replace `key` with the number of positions you want to shift the letters by.
2. Enter the plaintext message when prompted.
3. The encoded message will be displayed as the output.

## Example
```bash
$ ./caesar 3
Plaintext: hello
ciphertext: khoor
```

## Contributing
1. Fork the repository.
2. Create a new branch:
   ```bash
   git checkout -b feature/your-feature-name
   ```
3. Make your changes and commit them:
   ```bash
   git commit -m 'Add some feature'
   ```
4. Push to the branch:
   ```bash
   git push origin feature/your-feature-name
   ```
5. Open a pull request.

## License
This project is not licensed under any License as of now.
