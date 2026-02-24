section "s11_m2_000"{
    int var0;
    if (Parameter_GetCh1Param(2, 335) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what ｛Shiba＊＊｝\ngot?)");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_??F", 0);
        Voice_PlayVoice("S1102000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Heh.");
        Message_Who(0);
        Message_MsgDisp("主人公", "What's wrong?");
        Voice_PlayVoice("S1102000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Thought so.");
        Message_Who(0);
        Message_MsgDisp("主人公", "What?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("S1102000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I saw it for the first time.\nIt's just as I thought it would be,\nto a certain extent.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wah, terrible luck! ...\nBut, why does he seem happy about\nit...)");
        }
    else if (Parameter_GetCh1Param(2, 335) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what ｛Shiba＊＊｝\ngot?)");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_??F", 0);
        Voice_PlayVoice("S1102000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Heh...");
        Message_Who(0);
        Message_MsgDisp("主人公", "What's up?");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(2, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("S1102000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I used up my luck this year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Is it possible...");
        Voice_PlayVoice("S1102000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I thought that maybe nothing good\nwill happen in the future.\nHaving excellent luck wouldn't make\na big difference.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Well, it makes a slight\ndifference...)");
        }
    else {
        var0 = System_Randam(0, 100);
        if (var0 <= 50){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what ｛Shiba＊＊｝\ngot?)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_??F", 0);
            Voice_PlayVoice("S1102000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Heh.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What's wrong?");
            Voice_PlayVoice("S1102000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Thought so.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1102000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I saw it for the first time.\nIt's just as I thought it would be,\nto a certain extent.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Wah, terrible luck! ...\nBut, why does he seem happy about\nit...)");
            }
        else if (var0 >= 51){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what ｛Shiba＊＊｝\ngot?)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_??F", 0);
            Voice_PlayVoice("S1102000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Heh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "What's wrong?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1102000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I used up my luck this year.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? Are you by chance...");
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1102000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I thought that maybe nothing good\nwill happen in the future.\nHaving excellent luck wouldn't make\na big difference.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Well, it makes a slight\ndifference...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 335, 1);
    }
