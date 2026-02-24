section "b16_m3_024"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 2, 4);
    Contact_SChFace(0, 3, 2);
    Contact_SChFace(0, 4, 1);
    Voice_PlayVoice("XC_03_00_C01600", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "*Sigh*...\nI have a request: Will you calm down\na little?");
    Message_MsgSel("Okay, sorry.", "Eh～...");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 11);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_03_00_C01700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yes, take a deep breath in....\nI will do it, too.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 9);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_03_00_C01800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "That's cruel...\nPlease don't harass me anymore.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
