section "b04_m3_222"{
    int var0 = Date_GetDateOption(2, 67);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403222_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "The view from here is exceptional.\nYou can see the entire town!");
        Message_MsgSel("It feels like we've captured the world!", "I wonder what the past view was like.", "Your legs are trembling.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403222_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Saying the world is exaggerating....\nBut I literally feel like a feudal\nlord.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403222_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah...\nThe coastline has changed because of\ndevelopment, so the old view was\nprobably completely different.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403222_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nIt is just the vibrations of the\nfloor.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403222_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Back then, no matter where you were\nin town, you could get a view of\nthis castle, right?");
        Message_MsgSel("It's not a tall building or anything.", "You could also see everyone from here.", "Ah, I saw our school!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403222_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, the town was generally made up\nof one-storey houses.\nThe castle probably looked majestic.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403222_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nEven if you can see the moon from\nyour home, you cannot see your home\nfrom the moon.\nThis is the same situation.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403222_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Of course you can see it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(3, 3, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403222_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I wonder with what feelings did the\nlord of the castle look over the\ntown with from here...");
        Message_MsgSel("... Probably peace?", "We don't know the thoughts of rulers.", "Maybe the same as we feel.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403222_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nThat is something like a lord from a\nfairy-tale would think.\nIt is a simple way of thinking.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403222_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, it is difficult.\nDid he lead the people, or did he\ntest out his abilities every day?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403222_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "No...!\nThe people's sovereign was surely\ndifferent to us in some way...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403222_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "*Sigh*... Perhaps.\nEven though they are called a castle\nlord, they are no different to\nhumans...");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403222_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nWho exactly decided that leaders\nwere different?\nOr was that my assumption in the\nfirst place...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "...\nWhat's wrong, ｛Hikami＊＊｝?");
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403222_C01400", 3, "B0403222_C01401");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... ｛主人公｝.\nYou taught me something very\nimportant.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I did...?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403222_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yes.\nIt is as if I have seen the light.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403222_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nRight, you have unraveled my\nobstinate way of thinking.");
                Voice_PlayVoice("B0403222_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "So from now on...\nWill you open my eyes to many\nthings?");
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
