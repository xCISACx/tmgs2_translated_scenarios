section "b16_m1_024"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 8);
    Voice_PlayVoice("XC_01_00_A01600", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Ah, geez...\nYou act like a kid, you know?");
    Message_MsgSel("Yeah, maybe.", "I don't think so.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 11);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_01_00_A01700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Are you a kid? Me too.\nThen-- Umm, no, it's nothing...");
        break ;
        case 1:
        Contact_SChFace(0, 0, 9);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_01_00_A01800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I know that. You're not a kid...\nThat would be disgusting.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
