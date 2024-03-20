#define PIN 12
#define Key 2
#define BPM 180

#define jurokubu 15000/BPM       // 0.5*0.5*60*1000
#define hachibu 30000/BPM        // 0.5*60*1000
#define huten_hachibu 45000/BPM   // 1.5*0.5*60*1000
#define shibu 60000/BPM          // 60*1000
#define huten_shibu 90000/BPM     // 1.5*60*1000
#define nibu 120000/BPM          // 2*60*1000
#define huten_nibu 180000/BPM     // 2*1.5*60*1000
#define zen 240000/BPM           // 4*60*1000

#define soushoku 5000/BPM        // 数字は適当

#define  doL 0
#define dosL 1
#define  reL 2
#define resL 3
#define  miL 4
#define  faL 5
#define fasL 6
#define  soL 7
#define sosL 8
#define  raL 9
#define rasL 10
#define  siL 11

#define  doM 12
#define dosM 13
#define  reM 14
#define resM 15
#define  miM 16
#define  faM 17
#define fasM 18
#define  soM 19
#define sosM 20
#define  raM 21
#define rasM 22
#define  siM 23

#define  doH 24
#define dosH 25
#define  reH 26
#define resH 27
#define  miH 28
#define  faH 29
#define fasH 30
#define  soH 31
#define sosH 32
#define  raH 33
#define rasH 34
#define  siH 35

int note[] = {131, 139, 147, 156, 165, 175, 185, 196, 208, 220, 233, 247, 262, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494, 523, 554, 587, 622, 659, 698, 740, 784, 830, 880, 932, 988};

void setup() {
  tone(PIN, note[soM], shibu);
  delay(shibu);
  tone(PIN, note[resM], shibu);
  delay(shibu);
  tone(PIN, note[rasL], shibu);
  delay(shibu);
  tone(PIN, note[resM], shibu);
  delay(shibu);
  tone(PIN, note[faM], shibu);
  delay(shibu);
  tone(PIN, note[rasM], nibu);
  delay(nibu);
  tone(PIN, note[rasL], shibu);
  delay(shibu);
  tone(PIN, note[faM], shibu);
  delay(shibu);
  tone(PIN, note[soM], shibu);
  delay(shibu);
  tone(PIN, note[faM], shibu);
  delay(shibu);
  tone(PIN, note[rasL], shibu);
  delay(shibu);
  tone(PIN, note[resM], huten_nibu);
  delay(huten_nibu);
  delay(1000);
  //ここから転調
  tone(PIN, note[soM + Key], shibu);
  delay(shibu);
  tone(PIN, note[resM + Key], shibu);
  delay(shibu);
  tone(PIN, note[rasL + Key], shibu);
  delay(shibu);
  tone(PIN, note[resM + Key], shibu);
  delay(shibu);
  tone(PIN, note[faM + Key], shibu);
  delay(shibu);
  tone(PIN, note[rasM + Key], nibu);
  delay(nibu);
  tone(PIN, note[rasL + Key], shibu);
  delay(shibu);
  tone(PIN, note[faM + Key], shibu);
  delay(shibu);
  tone(PIN, note[soM + Key], shibu);
  delay(shibu);
  tone(PIN, note[faM + Key], shibu);
  delay(shibu);
  tone(PIN, note[rasL + Key], shibu);
  delay(shibu);
  tone(PIN, note[resM + Key], huten_nibu);
  delay(huten_nibu);
}

void loop() {

}
