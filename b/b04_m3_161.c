section "b04_m3_161"{
    int var0 = Date_GetDateOption(2, 45);
    Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE410_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0403161_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I have not been here before.\nI will leave it to you to decide\nwhat we will do.");
        Message_MsgSel("Let's check our compatibility!", "There's a stuffed toy that I want.", "As expected, fighting games!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(3, 2, (#1), 1);
            Voice_PlayVoice("B0403161_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Compatibility...?\nAre we going to use an unscientific\nmachine?\nIt has an inconsistent feel to it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403161_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Then the both of us must try it out.\nIt seems like that is the best way.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403161_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It cannot be avoided when there is\nonly this kind of games...\nPlease go easy on me.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0403161_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "There are quiz games, too.\nIt seems like I can aim for the top\nscore.\nDo you begin by choosing a category?");
        Message_MsgSel("There are also miscellaneous quizzes.", "Let's do the intelligence quiz?", "Leave the quiz about entertainment to me!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403161_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nIt might be nice if I knew the\ndegree of difficulty for each quiz.\nAnyway, let us try.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403161_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, that is what I wanted to do.\nIn other words, show me what you've\ngot.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0403161_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Even though there are other genres,\nout of all things, you choose that?\n... I will watch you play.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0403161_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It is a new shooter game.\n\"Save the damsel from the evil\norganization\".\nShould we save her together?");
        Message_MsgSel("Yeah, let's save her!", "What a cliched story.", "Save me, too▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403161_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "What a good response....\nAlright, I will also put my back\ninto it and do my best.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403161_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Really?\nI thought it was a simple and easy\nto understand theme though.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0403161_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nDon't you also have to defeat your\nown enemies?\nSettle this problem as much as you\ncan by yourself.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403161_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh...!?\nW-What are you saying all of a\nsudden?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403161_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "When I said to save the damsel, I\nwas only talking about the game, but\nif I think about it in real life,\nsurely...");
                Message_Who(0);
                Message_MsgDisp("主人公", "I-It was a joke.");
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403161_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh......?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403161_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Ha-haha......\nSo I jumped to a conclusion...");
                Message_Who(0);
                Message_MsgDisp("主人公", "...\nBy the way, ｛Hikami＊＊｝,\nwhat were you about to say just\nthen?");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403161_C01600", 3, "B0403161_C01601");
                Message_Who(3);
                Message_MsgDisp("Hikami", "......\n｛主人公｝, shouldn't you\njust leave that alone?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0403161_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Now then, let us save the damsel in\nthe game together!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay!");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
