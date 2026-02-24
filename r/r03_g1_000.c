section "r03_g1_000"{
    if (Parameter_GetCh1Param(10, 513) != 1){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(10, "G1_12F", 0);
        Voice_PlayVoice("R0310000_J00000", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "You're merry, ｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, Merry Christmas,\n｛Toudou＊＊｝!");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(10, 2, (#1));
            Voice_PlayVoice("R0310000_J00100", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Hey, that's a sexy color you're\nwearing today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, really?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0310000_J00200", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Yes, it suits you. The dress.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It was good to wear this dress!)");
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Voice_PlayVoice("R0310000_J00300", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Well, I must go. See you later.");
            Character_Chara_GS2(10, "NON");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Voice_PlayVoice("R0310000_J00300", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Well, I must go. See you later.");
            Character_Chara_GS2(10, "NON");
            }
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(10, "G1_12F", 0);
        Voice_PlayVoice("R0310000_J00400", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Ah... Merry Christmas.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Merry Christmas,\n｛Toudou＊＊｝.");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(10, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("R0310000_J00500", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "What's wrong with you?\nWhat made you put on that dress?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0310000_J00600", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Well, do as much as you can.");
            Character_Chara_GS2(10, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I feel bad.)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(10, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0310000_J00700", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "You have some nerve coming here in\ncasual clothes.\nWell, do the best you can.");
            Character_Chara_GS2(10, "NON");
            }
        }
    Parameter_AddCh1Param(10, 86, 1);
    }
