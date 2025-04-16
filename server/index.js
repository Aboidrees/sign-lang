// server.js
import express from "express";
import { SerialPort } from "serialport";
import cors from "cors";
const app = express();
const port = 3000;

app.use(cors());

const serialPort = new SerialPort({
  path: "COM3",
  baudRate: 115200,
});

app.get("/send", (req, res) => {
  const letter = req.query.letter;
  console.log(letter);
  serialPort.write(letter, (err) => {
    if (err) return res.send("Error sending letter");
    res.send("Letter sent: " + letter);
  });
});

app.listen(port, () => console.log(`Server running on port ${port}`));
