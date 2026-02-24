section "b16_m5_032"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XB_05_00_E01800", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "You have the feeling of a stuffed\ntoy.");
    Message_MsgSel("Yeah, I do.", "Hmm～...");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XB_05_00_E01900", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "You're like a teddy bear.\nI just wanna hug you!");
        break ;
        case 1:
        Contact_SChFace(0, 0, 0);
        Voice_PlayVoice("XB_05_00_E02000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hmm, you make me wanna hug you.\nShould we do it now?");
        break ;
        }
    Music_StopBGM(0, 40);
    }
