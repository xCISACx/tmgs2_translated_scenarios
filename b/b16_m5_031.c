section "b16_m5_031"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XB_05_00_E01500", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Maybe I should make a ring.");
    Message_MsgSel("Yeah.", "Hmm～...");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XB_05_00_E01600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Let's both make one and exchange it?\n... Like a rehearsal.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 0);
        Voice_PlayVoice("XB_05_00_E01700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "If there's something else you want,\nyou can request it.\nI'll give it to you as a present.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
