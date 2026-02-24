section "b16_m8_031"{
    Contact_SChFace(1, 0, 2);
    Contact_SChFace(1, 0, (#1));
    Contact_SChFace(1, 4, 0);
    Contact_SChFace(1, 4, 0);
    Voice_PlayVoice("XB_08_00_H01400", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Ah, don't touch the parking break,\nokay?");
    Message_MsgSel("Understood.", "Okay～...");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(1, 0, 3);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XB_08_00_H01500", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "If you're interested, I'll teach you\nan easy way to drive.");
        break ;
        case 1:
        Contact_SChFace(1, 2, 2);
        Contact_SChFace(1, 3, 3);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XB_08_00_H01600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Geez.\nFor the moment, just make do with my\nlap or something.\nOkay?");
        break ;
        }
    }
