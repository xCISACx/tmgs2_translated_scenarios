section "b16_m4_024"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XC_04_00_D01600", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Do you like my voice?");
    Message_MsgSel("Yeah.", "No, I don't.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 2, 0);
        Contact_SChFace(0, 3, 3);
        Voice_PlayVoice("XC_04_00_D01700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Thanks. I like your voice too...");
        break ;
        case 1:
        Contact_SChFace(0, 2, 0);
        Contact_SChFace(0, 3, 3);
        Voice_PlayVoice("XC_04_00_D01800", 4, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Hm?\nI'll keep saying your name until you\nlike it....\n｛主人公｝.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
