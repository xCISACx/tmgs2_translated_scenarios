section "r04_m3_000"{
    int var0 = 0;
    var0 = Parameter_ExtChar(1, 6, 3, 1);
    if ((System_GlobalWork(23, 1) == 3 && var0 != 8)){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_12F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.\nMerry Christmas!");
        Voice_PlayVoice("FD_03_040_00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Merry Christmas.\nNo, that sort of thing isn't\nright...");
        Character_ChFace(0, 0, 8);
        Voice_PlayVoice("FD_03_040_00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "This kind of occassion is important.\nYou must show a different side of\nyourself to him.\nI'll pray for you!");
        Message_Who(0);
        Message_MsgDisp("主人公", "O-Okay!");
        }
    else if (Parameter_GetCh1Param(3, 130) <= 2){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_12F", 0);
        Voice_PlayVoice("", 3, "R0403000_C00000");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝, you came,\ntoo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("R0403000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Y-You are wearing a dress.");
            Message_Who(0);
            Message_MsgDisp("主人公", "That's right.\nWhat do you think of it,\n｛Hikami＊＊｝?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0403000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It's flashy....\nHowever, it suits this kind of\nplace.\nYou look gorgeous today.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("R0403000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I will go greet the teachers.\nWell then, goodbye.");
        }
    else if (Parameter_GetCh1Param(3, 130) == 3){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_12F", 0);
        Voice_PlayVoice("", 3, "R0403000_C00400");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝, Merry\nChristmas.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.\nMerry Christmas!");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("R0403000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nI thought the atmosphere was a\nlittle different.\nIt's because of the dress.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? ... It doesn't suit me?");
            Character_BlinkStart(3, 0, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("R0403000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "No, that is not it.\nYour attire should be important.\nThat is to say, I feel like you\nshould change.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("R0403000_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You look gorgeous today.\nThe assembly hall decorations are\ndefeated.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("R0403000_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I must greet the other members of\nthe Student Council.\nWell, excuse me.");
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(3, "M3_12F", 0);
        Voice_PlayVoice("", 3, "R0403000_C00900");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝, you are here.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.\nMerry Christmas!");
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("R0403000_C01000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Merry Christmas....\nLooking for an acquaintance is hard\nwork with so many people around.");
        Message_Who(0);
        Message_MsgDisp("主人公", "*Giggles* I appreciate your efforts.");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0403000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nI take it, a girl's mood changes\nquite a bit when it comes to\nclothes?\nI am used to seeing that.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("R0403000_C01200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You in that dress......\nYou always look quite different.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh... Does it not suit me?");
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("R0403000_C01300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Outrageous!\nYou are more gorgeous than anyone\nhere tonight....\nYou are always beautiful.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("R0403000_C01400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nIt was nice that I was able to meet\nyou.\nThis party is going to be a\npleasure.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I'm excited.");
        Character_ChFace(0, 0, 3);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("R0403000_C01500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yes....\nWell, I will leave now to search for\nother executive members.");
        }
    Character_Chara_GS2(3, "NON");
    Parameter_AddCh1Param(3, 86, 1);
    if (Parameter_ChkPlayer(17) == 1){
        Parameter_AddCh1Param(3, 61, 2);
        Parameter_AddCh1Param(3, 60, 1);
        Parameter_AddCh1Param(3, 62, #2);
        }
    }
