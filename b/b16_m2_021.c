section "b16_m2_021"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XB_02_00_B00900", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Your cheeks are red....\nAre you embarrassed?");
    Message_MsgSel("Yeah...", "I wonder?");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 8);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_02_00_B01000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Don't be so honest.\nNow I'm embarrassed.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XB_02_00_B01100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Eh... No, it's fine.\nIf you flat-out refused it, it'd\nmake people suspicious, right?");
        break ;
        }
    Music_StopBGM(0, 40);
    }
