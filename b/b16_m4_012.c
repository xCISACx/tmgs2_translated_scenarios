section "b16_m4_012"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 6);
    Voice_PlayVoice("XB_04_00_D00600", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Hey... You're crying?");
    Message_MsgSel("Yeah.", "No, I'm not.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 9);
        Voice_PlayVoice("XB_04_00_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "What the-- It's just tears from\nyawning!\nYou scared me...");
        break ;
        case 1:
        Contact_SChFace(0, 0, 9);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_04_00_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "C-Cut it out. That...\nmakes my heart beat faster.\nIn many ways.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
