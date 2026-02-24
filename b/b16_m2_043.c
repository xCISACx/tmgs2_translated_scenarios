section "b16_m2_043"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XB_02_00_B02700", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Can I spoil you a little more?");
    Message_MsgSel("Sure, thanks.", "I'm fine.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XB_02_00_B02800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Ah, so you're that kinda person.\nI'm glad.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 11);
        Voice_PlayVoice("XB_02_00_B02900", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Depend on others a little more.\nIt's fine to, every once in a while.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
