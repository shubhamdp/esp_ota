#### MSS Test Devices

---
<a href="https://espressif.github.io/esp-launchpad/?flashConfigURL=https://shubhamdp.github.io/esp_ota/internal_test_dev/launchpad_config.toml" target="_blank" rel="noopener noreferrer">
    <img alt="Try it with ESP Launchpad" src="https://espressif.github.io/esp-launchpad/assets/try_with_launchpad.png" width="250" height="70">
</a>

---

#### Test Data

|   | APID | Discriminator | Passcode | Serial Number | Vendor ID | Product Id | Unique Id for RID (base64) |
|---|------|---------------|----------|---------------|-----------|------------|----------------------------|
| 1 | NZqb | 2393          | 58501183 | ffs_device1   | 65521     | 32769      | bvEUyJTzfnlP/3eUQPw05A==   |
| 2 | NZqb | 216           | 29526823 | ffs_device2   | 65521     | 32769      | weE/LjoDUUwh0+2njbO8YA==   |
| 3 | NZqb | 1658          | 41649786 | ffs_device3   | 65521     | 32769      | 7PcA5INlfYZGZ9bB7te58w==   |
| 4 | NZqb | 601           | 43143488 | ffs_device4   | 65521     | 32769      | Wd3eBVVrPkYtZ4zxf909ig==   |
| 5 | NZqb | 3561          | 71846142 | ffs_device4   | 65521     | 32769      | RH+DDXHBVJk5UU4fSEiMuQ==   |


---
#### Some Hacks
- Base64 to hex string
    ```
    echo iphlNnOvSs6vDxdwD2kuhg== | base64 -d | xxd -p
    ```

- Hex string to base64
    ```
    echo 59ddde05556b3e462d678cf17fdd3d8a | xxd -p -r | base64
    ```
