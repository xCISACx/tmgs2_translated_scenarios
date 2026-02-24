section "b16_m2_033"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XC_02_00_B02400", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Your hands are tiny.");
    Message_MsgSel("Yeah, maybe.", "I don't think so.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XC_02_00_B02500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "They're perfect for holding....\nAren't they?");
        break ;
        case 1:
        Contact_SChFace(0, 0, 11);
        Voice_PlayVoice("XC_02_00_B02600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "But it fits right in the palm of my\nhand....\nThe size of your hands are good.\nDon't worry about it.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
