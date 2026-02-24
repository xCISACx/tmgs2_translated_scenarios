section "b02_m6_010"{
    if (Date_GetDateOption(4) == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0206010_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That swimsuit is nice!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, really?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 2, (#1), 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0206010_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah, I think Senpai looks really\nnice in it!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Great!\n｛Amachi＊＊｝ seems to like\nthis swimsuit.)");
            }
        else {
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0206010_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, that's cute!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, really?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1), 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0206010_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah, though there's no sexiness in\nit, it suits you perfectly, Senpai!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nThere seems to be more to that, but\nit seems like he likes it.\nIt's good that I'm wearing this!)");
            }
        Message_CloseMsg();
        Character_Chara_GS2(6, "M6_09F", 0, 1, 0);
        Parameter_AddCh1Param(6, 61, 2);
        Parameter_AddCh1Param(6, 60, 1);
        Parameter_AddCh1Param(6, 62, #2);
        }
    else if (Date_GetDateOption(4) == 2){
        Character_Chara_GS2(6, "M6_09F", 0);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0206010_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That swimsuit...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? What's wrong with it?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0206010_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "N-No, nothing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He seems not to like this\nswimsuit...)");
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0206010_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Woah...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? What's wrong?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0206010_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, don't you have anything other\nthan that?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He doesn't seem to like this\nswimsuit...)");
            }
        Message_CloseMsg();
        Character_Chara_GS2(6, "M6_09F", 0, 1, 0);
        Parameter_AddCh1Param(6, 61, #1);
        Parameter_AddCh1Param(6, 60, 0);
        Parameter_AddCh1Param(6, 62, 1);
        }
    }
