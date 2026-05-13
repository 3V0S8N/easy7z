# Easy 7-Zip 0.1.7

Easy 7-Zip 0.1.6 (originally by James Hoo, based on 7-Zip 16.04) ported to the
**7-Zip 19.00** source tree.

## What it adds on top of vanilla 7-Zip

1. **Extract dialog enhancements** — "Open" button, free-space label for output drive, three checkboxes after extraction:
   - Open output folder
   - Delete source archive
   - Close 7-Zip (FM only)
2. **Shared output path history** across all extract dialogs (FM + context-menu), 30 entries
3. **System tray background mode** — minimize progress to tray with 15-frame animated icon, tray context menu, percent indicator
4. **Resizable Progress / ListView / Messages dialogs** with sensible minimum sizes
5. **"About Easy 7-Zip" dialog** under the Help menu
6. **Tahoma** as the default UI font (instead of MS Shell Dlg)
7. **Defaults**: non-cascaded context menu with icons enabled
8. **PanelSplitFile** post-actions (Open Folder / Delete Source / Close 7-Zip)

## Build

Open a **Developer Command Prompt for Visual Studio** (2019 / 2022 / 2026), then:

```cmd
cd CPP\7zip
nmake PLATFORM=x64
```

Builds 18 targets — main outputs:

| Output | Path |
|---|---|
| `7zFM.exe` (File Manager, all-in-one) | `CPP\7zip\Bundles\Fm\x64\` |
| `7z.exe` (console) | `CPP\7zip\UI\Console\x64\` |
| `7zG.exe` (GUI extract) | `CPP\7zip\UI\GUI\x64\` |
| `7z.dll` (full format DLL) | `CPP\7zip\Bundles\Format7zF\x64\` |
| `7z.sfx`, `7zCon.sfx`, `7zS.sfx` | `CPP\7zip\Bundles\SFX*\x64\` |
| `7-zip.dll` (Explorer plugin) | `CPP\7zip\UI\Explorer\x64\` |

For x86, run `vcvars32.bat` and `nmake` without `PLATFORM=`.

## Tested With

MSVC 19.50 (Visual Studio 2026 Community), Windows SDK 10. Clean build under `-W4 -WX`.

## License

[GNU LGPL v2.1](LICENSE), same as 7-Zip. The unRAR decode code is under a mixed
LGPL + unRAR restriction (see [`DOC/unRarLicense.txt`](DOC/unRarLicense.txt)).
Detailed per-file licensing in [`DOC/License.txt`](DOC/License.txt).

## Credits

- **7-Zip**: Copyright © 1999-2018 Igor Pavlov — <https://www.7-zip.org/>
- **Easy 7-Zip 0.1.6**: Portions © 2013-2016 James Hoo — <http://www.e7z.org/>
- **Easy 7-Zip 0.1.7** (this update for 7-Zip 19.00): © 2019 5e5
