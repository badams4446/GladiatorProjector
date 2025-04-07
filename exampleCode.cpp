
// file system object from SdFat
FatFileSystem fatfs;

// Configuration for the datalogging file:
#define FILE_NAME "test.csv"

// First call begin to mount the filesystem. Check that it returns true
// to make sure the filesystem was mounted.

if (!fatfs.begin(&Arcada_QSPI_Flash)) {
    Serial.println("Error, failed to mount newly formatted filesystem!");
    Serial.println("Was the flash chip formatted with the fatfs_format example?");
    while(1);
  
   }
  
  Serial.println("Mounted filesystem!");

  // Open the datalogging file for writing. The FILE_WRITE mode will open
// the file for appending, i.e. it will add new data to the end of the file.

File dataFile = fatfs.open(FILE_NAME, FILE_WRITE);
float b_temp = bmp280.readTemperature();
float pres = bmp280.readPressure()/100;
float humidity = sht30.readHumidity();

// Check that the file opened successfully and write a line to it.

if (dataFile) {
  dataFile.print(b_temp,2);
  dataFile.print(",");
  dataFile.print(pres, 2);
  dataFile.print(",");
  dataFile.print(humidity, 2);
  dataFile.println();

  // Finally close the file when done writing. This is smart to do to make
  // sure all the data is written to the file.

  dataFile.close();

  Serial.println("Wrote new measurement to data file!");

 }