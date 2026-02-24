section "b16_m1_034"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 11);
    Voice_PlayVoice("XC_01_00_A02700", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Do you wanna try... linking arms?");
    Message_MsgSel("Okay!", "... Eh?");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 11);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_01_00_A02800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah... Just for a bit, okay?");
        break ;
        case 1:
        Contact_SChFace(0, 0, 9);
        Voice_PlayVoice("XC_01_00_A02900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, right....\nThen what should we do?");
        break ;
        }
    Music_StopBGM(0, 40);
    }
