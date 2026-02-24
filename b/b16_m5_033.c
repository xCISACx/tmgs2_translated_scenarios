section "b16_m5_033"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XC_05_00_E02400", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Do you know what the \"lovers' grip\"\nis?");
    Message_MsgSel("Yes!", "No.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XC_05_00_E02500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... I don't know what it is.\nWill you tell me what it is?");
        break ;
        case 1:
        Contact_SChFace(0, 0, 0);
        Voice_PlayVoice("XC_05_00_E02600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Linking our fingers like this...\nJust by holding our hands like this,\ndoesn't it feel like we're very\nclose?");
        break ;
        }
    Music_StopBGM(0, 40);
    }
