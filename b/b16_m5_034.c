section "b16_m5_034"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XC_05_00_E02700", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "What is it? Do you want to do more?");
    Message_MsgSel("Yeah!", "No.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XC_05_00_E02800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hmm. Then should we?");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XC_05_00_E02900", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Are you embarrassed? It's fine....\nOkay?");
        break ;
        }
    Music_StopBGM(0, 40);
    }
