section "b16_m5_025"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XC_05_00_E01900", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Do you know what it means when you\nput your hand below your chin and\nlook up?");
    Message_MsgSel("Yes!", "No.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XC_05_00_E02000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... You're mature for your age.\nBut you're also shy.\nI'm stuck on you.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XC_05_00_E02100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It means \"Look closely at my\nface～\"....\nWere you looking forward to\nsomething else?\nYour face is bright red. How cute.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
