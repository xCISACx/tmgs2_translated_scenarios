section "r04_m7_000"{
    int var0 = 0;
    var0 = Parameter_ExtChar(1, 6, 3, 1);
    if ((System_GlobalWork(23, 1) == 7 && var0 != 8)){
        Character_ChFace(0, 0, 11);
        Character_Chara_GS2(7, "M7_12F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝!\nMerry Christmas!");
        Voice_PlayVoice("FD_07_040_00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Merry Christmas.\nThis kind of party is a joke!\nA clever joke!");
        Message_Who(0);
        Message_MsgDisp("主人公", "It is!? Umm, but how is it...");
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(7, 3, (#1));
        Voice_PlayVoice("FD_07_040_00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "For example... This is no good.\nI don't know any clever jokes at\nall...\nSorry.");
        }
    else if (Parameter_GetCh1Param(7, 130) <= 2){
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 2, (#1));
        Character_Chara_GS2(7, "M7_12F", 0);
        Voice_PlayVoice("R0407000_G00000", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Hello, ｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝.");
        Voice_PlayVoice("R0407000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Are you enjoying the party?");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(7, 2, (#1));
            Voice_PlayVoice("R0407000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Those are your best clothes. Right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...\nYou don't have to say things like\nthat...\nB-Booooo!");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0407000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Huh? I'm sorry.\nI intended for it to be a praise.\nIt seems nice for the party.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("R0407000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Well, Sensei will leave now.");
        }
    else if (Parameter_GetCh1Param(7, 130) == 3){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(7, "M7_12F", 0);
        Voice_PlayVoice("", 7, "R0407000_G00500");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Merry Christmas,\n｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝.\nMerry Christmas!");
        Voice_PlayVoice("R0407000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I'm enjoying the party the best I\ncan.");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0407000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You look dressed up.\nIt suits you very much.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you!\nThat suits you very well too,\n｛Wakaouji＊＊｝!");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("", 7, "R0407000_G00800");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "That voice again,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? ...\nOh, umm, you look great,\n｛Wakaouji＊＊｝.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0407000_G00900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Thank you. Sensei came dressed up.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("R0407000_G01000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Sensei has to unwillingly join in\nwith the other adults soon.\nGoodnight.");
        }
    else {
        Character_ChFace(0, 3, 3);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(7, "M7_12F", 0);
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝.\nMerry Christmas!");
        Voice_PlayVoice("R0407000_G01100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Merry Christmas. You are here. Good.");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("R0407000_G01200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Today you are...");
            Message_Who(0);
            Message_MsgDisp("主人公", "What is it?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("R0407000_G01300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "The queen of the party.\nYou are very beautiful.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you, ｛Wakaouji＊＊｝.\nI owe it to the dress!");
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0407000_G01400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Haha, that much, huh? ...\nHowever, I shall beg to differ.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("R0407000_G01500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Sensei will return soon.\nHe left all of the behind-the-scenes\nwork to the other teachers.");
        Message_Who(0);
        Message_MsgDisp("主人公", "That sounds bad...");
        Voice_PlayVoice("R0407000_G01600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It does? I'll go there to help then.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 2, (#1));
        Voice_PlayVoice("R0407000_G01700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Well, relax and enjoy the party.");
        }
    Character_Chara_GS2(7, "NON");
    Parameter_AddCh1Param(7, 86, 1);
    if (Parameter_ChkPlayer(17) == 1){
        Parameter_AddCh1Param(7, 61, 2);
        Parameter_AddCh1Param(7, 60, 1);
        Parameter_AddCh1Param(7, 62, #2);
        }
    }
