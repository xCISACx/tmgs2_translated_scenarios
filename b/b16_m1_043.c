section "b16_m1_043"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 11);
    Voice_PlayVoice("XB_01_00_A02700", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Hey, you.\nDo you actually wanna do these\nthings at school?");
    Message_MsgSel("Yeah, maybe.", "I don't think so.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 11);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_01_00_A02800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Quit it, alright? Just that.\nIt's not a proper thing to do.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_01_00_A02900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I see. Hmm...\nWell, it's not a good thing to do,\nright?\nI see...");
        break ;
        }
    Music_StopBGM(0, 40);
    }
