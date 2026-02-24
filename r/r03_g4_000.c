section "r03_g4_000"{
    if (Parameter_GetCh1Param(13, 513) != 1){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(13, "G4_12F", 0);
        Voice_PlayVoice("", #1, "R0313000_M00000");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "｛主人公｝, you came,\nafter all!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝!");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(13, 2, (#1));
        Voice_PlayVoice("R0313000_M00100", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Merry Christmas～!");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("R0313000_M00200", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Waaah, that dress suits you～!\nI'm all dressed up, too!\nWe're at the right age for marriage▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "Right, ｛Mizushima＊＊｝!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(13, 3, (#1));
            Voice_PlayVoice("R0313000_M00300", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "*Giggles*");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was praised by\n｛Mizushima＊＊｝!)");
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("R0313000_M00400", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "...\nWell, is it okay if I go greet\neveryone for a moment?");
            Character_Chara_GS2(13, "NON");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("R0313000_M00500", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "...\nWell, is it okay if I go greet\neveryone for a moment?");
            Character_Chara_GS2(13, "NON");
            }
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(13, "G4_12F", 0);
        Voice_PlayVoice("R0313000_M00600", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Hah...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝!");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(13, 2, (#1));
            Voice_PlayVoice("R0313000_M00700", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "You wore... a dress?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I kind of did my best.\nYou look very beautiful,\n｛Mizushima＊＊｝.");
            Character_BlinkStart(13, 3, (#1));
            Voice_PlayVoice("R0313000_M00800", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "... Thank you.");
            Character_Chara_GS2(13, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(... I see.\n｛Mizushima＊＊｝ came, too.)");
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(13, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("R0313000_M00900", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "..............");
            Character_Chara_GS2(13, "NON");
            }
        }
    Parameter_AddCh1Param(13, 86, 1);
    }
