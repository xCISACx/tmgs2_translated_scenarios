section "o03_g4_010"{
    if (Parameter_GetCh1Param(13, 130) < 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "A three-legged race...\nI need a partner.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(13, "G4_08F", 0);
        Voice_PlayVoice("", 13, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝!");
        Voice_PlayVoice("O0313000_M00000", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Hey, it appears you do not have a\npartner.\nDo you want to partner together with\nme?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah!");
        }
    else if (Parameter_GetCh1Param(13, 130) >= 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "A three-legged race...\nI need a partner.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(13, "G4_08F", 0);
        Voice_PlayVoice("", 13, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝!");
        Voice_PlayVoice("O0313000_M00100", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "I was looking for you!\nHey, do you want to participate\ntogether?\nIt's a three-legged race.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes!");
        }
    Message_CloseMsg();
    Character_Chara_GS2(13, "NON");
    }
