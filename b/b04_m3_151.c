section "b04_m3_151"{
    int var0 = Date_GetDateOption(2, 43);
    Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0403151_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It has been a while since I have\nbeen to a bowling alley....\nNow then, shall we start the game?");
        Message_MsgSel("I'd like for you to teach me how to bowl.", "Let's compete to see who wins!", "Since we're playing, let's take it easy?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403151_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I am sorry.\nI am not that good at bowling as to\nteach someone well.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(3, 3, (#1), 1);
            Voice_PlayVoice("B0403151_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Bowling is just for leisure.\nYou should relax your shoulders\nmore.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403151_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, that is right.\nI was just thinking about saying the\nsame thing.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0403151_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "If I keep my foot at this position,\nand bowl the ball towards the second\npin...");
        Message_MsgSel("... What are you talking about?", "You should be able to hit the middle pin.", "No good is just no good.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403151_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It is so that I can knock the middle\npin down.\nBowling is a theoretical sport.");
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
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403151_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nSo you know the theories about\nbowling the ball.\nI cannot be careless.");
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
            Voice_PlayVoice("B0403151_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nAs a person, I do not appreciate\nyour way of trying to distract me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0403151_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nThat sound when the ball strikes the\npins is considerably exhilarating.");
        Message_MsgSel("It's the best when you bowl a strike▼", "The gutter sound makes me sad.", "You're living like an adolescent▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403151_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, that is true.\nI would not be exaggerating if I\nsaid I aim for a strike so I can\nhear that noise.");
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
            Voice_PlayVoice("B0403151_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, because it is a pathetic sound.\nIt also takes time to reach the end,\nso it feels unbearable.");
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
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 3, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403151_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", ".........\nSorry, I do not understand what you\nmean by that.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403151_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... A-Adolescent?\nIs that how it seems like to you?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.... Is it strange?");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403151_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "No...\nI thought that my adolescence was\ndevoted entirely to being an\nexecutive of the Student Council.");
                Voice_PlayVoice("B0403151_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "But it certainly might be the case.\nThis kind of situation is...");
                Message_Who(0);
                Message_MsgDisp("主人公", "... ｛Hikami＊＊｝?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403151_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Ah, no! It is nothing.\nImmediately pondering about things\nis a bad habit of mine.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403151_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I must treasure this one page in my\nshining adolescence!\n... Now, let us play one more game!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(... Alright, I'll also do my best!)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
