section "o03_m1_010"{
    if (Parameter_GetPl1Param(312) != 1){
        if (Parameter_GetCh1Param(1, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝!");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0301010_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What, you're joining?\nAre you looking for a partner?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.");
            Voice_PlayVoice("O0301010_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Me too.\nSince it's a pain, do you want to\nteam up?");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0301010_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Oh, good timing.\nI've been looking for a partner.\nLet's team up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah! Sure.");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝!");
            Voice_PlayVoice("O0301010_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "The three-legged race is about to\nstart....\nUmmm...");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("O0301010_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Shall we go?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!");
            }
        }
    else {
        if (Parameter_GetCh1Param(1, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝!");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0301010_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What, you're joining?\nAre you looking for a partner?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.");
            Voice_PlayVoice("O0301010_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Me too.\nSince it's a pain, do you want to\nteam up?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Shall we?");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("O0301010_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Be mindful, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Huh?");
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("O0301010_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You know, not something weird.\nLike not bumping into each other....\nLike the other day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ye-Yeah, okay...");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0301010_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Oh, good timing.\nI've been looking for a partner.\nLet's team up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah! Sure. Shall we?");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("O0301010_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Oh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hmm?");
            Character_ChFace(0, 0, 6);
            Voice_PlayVoice("O0301010_A01100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "B-Be mindful...\nTry not to bump into me....\nLike the other day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ye-Yeah, okay...");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝!");
            Character_ChFace(0, 0, 6);
            Voice_PlayVoice("O0301010_A01200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You know...\nI'm not intending to do anything\nweird, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Anything weird?");
            Character_BlinkStart(1, 3, (#1));
            Voice_PlayVoice("O0301010_A01300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "...\nIt's like when we bumped into each\nother on the way home from school\nthat time...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, okay...");
            Character_BlinkStart(1, 0, (#1));
            Voice_PlayVoice("O0301010_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Shall we go?\nFor the three-legged race.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!");
            }
        }
    Message_CloseMsg();
    Character_Chara_GS2(1, "NON");
    }
