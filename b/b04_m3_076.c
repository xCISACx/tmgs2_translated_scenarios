section "b04_m3_076"{
    int var0 = Date_GetDateOption(2, 23);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403076_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Even if it snows, this coldness does\nnot feel strange.");
        Message_MsgSel("The dead trees look so desolate.", "Doing this once in a while is nice.", "It's cold, I can't move.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403076_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Really?\nThat is how trees are in Winter.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403076_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You think so too? ...\nActually, I like the avenue of trees\nin Winter.\nI occasionally walk alone here.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0403076_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nIf you do not like the cold, then\nwould it not have been better to not\ncome here at all?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403076_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "When you walk here in Winter, don't\nyou think that you can discover\nthings that you do not notice in\nother seasons?");
        Message_MsgSel("Like there are few people?", "Like the resilience of the tree branches?", "Like you're fine with the cold?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403076_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Well...\nthere aren't a lot of people around,\nbut I wouldn't call it a \"few\".\nI mean, we are walking here, too.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403076_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, right.\nIt is refreshing that we get to see\nthe original state of trees that\nhave lost their leaves.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403076_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... I can feel the cold.\nIn order to brace my body and mind\nfor it, I am taking a walk in the\ncold.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403076_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "The Forest Park in Winter is fine\nlike this.\nNo flower viewers or stalls.\nOnly people who enjoy nature.");
        Message_MsgSel("We can think deeply when it's calm.", "But as expected, it's cold.", "It's a baked sweet potato store!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403076_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Thank you...\nI thought that you would understand\nhow nice this place is.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403076_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see...\nI cannot let you go home with a\ncold, let us hurry up and leave.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0403076_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nYes, it has spoiled this scenery.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0403076_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh...? Are you interested?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, because it's gotten a little\ncooler...");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403076_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I see......\nAh, aren't you shivering!?\nHave you been suffering in this\ncold?");
                Message_Who(0);
                Message_MsgDisp("主人公", "No, not at all...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403076_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "No, you look cold!\nI am sorry I did not notice...");
                Character_BlinkStart(3, 0, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403076_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nNow that I think about it, baked\nsweet potatoes remind me of Winter.\nI could say that it is a food\ntypical of Winter.");
                Voice_PlayVoice("B0403076_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "And wanting to eat it is not\nstrange....\nSo I will go buy it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh, didn't you hate such stalls,\n｛Hikami＊＊｝...?");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403076_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It is fine, if it will warm you\nup...\nAlso...");
                Message_Who(0);
                Message_MsgDisp("主人公", "...?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403076_C01800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I somewhat...\nget annoyed at myself...\nwhen you hold back.");
                Voice_PlayVoice("B0403076_C01900", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "So from now on...\nplease be honest with me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
