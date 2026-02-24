section "b16_m2_024"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XC_02_00_B01600", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Has anyone ever told you that you've\ngotten cuter lately?");
    Message_MsgSel("Yeah.", "I don't think so.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 8);
        Voice_PlayVoice("XC_02_00_B01700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I thought so....\nI gotta prepare myself.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XC_02_00_B01800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Then it's fine....\nI'm fine with knowing that I'm the\nonly one who noticed.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
