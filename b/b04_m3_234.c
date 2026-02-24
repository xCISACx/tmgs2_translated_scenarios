section "b04_m3_234"{
    int var0 = Date_GetDateOption(2, 71);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0403234_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "So it is over now....\nThe light of the outdoors is\nradiant.");
        Message_MsgSel("It was scary, but I enjoyed being with you!", "I was so scared I shut my eyes...", "It felt like it was just childish tricks!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403234_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "That was a waste.\nIf you were alone, perhaps you would\nhave been able to be scared, for\nreal.");
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
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403234_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Haha.\nSo how many times did you bump into\nthe walls then?\nWouldn't you still be scared, all\nthe more that way?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0403234_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It is a haunted house, after all.\nI think it would have been bad if\nthey aimed to be too ambitious.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0403234_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It was crowded inside.\nThere were quite a few people in\nthere who like scary things.");
        Message_MsgSel("The scariness reduces when there are people.", "Anyway, I was so scared～!", "Eh, weren't we the only ones inside?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403234_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, it was a little unfortunate.\nIn some parts of it, I could not see\nthe monsters well.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(3, 2, (#1), 1);
            Voice_PlayVoice("B0403234_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nIt seems that your screams were a\nnuisance to the people around us.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403234_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Haha!\nI commend your enthusiasm of wanting\nto stir things up via the way you\ndelivered that.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0403234_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Although I was quite surprised, I\nhave come to think that scary things\nreally do exist.");
        Message_MsgSel("... Like surprise tests and stuff?", "Earthquakes, thunder, fire, your dad?", "Like when you are angry?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403234_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Are they that scary?\nI think that if you study properly\neach day, there is nothing to be\nafraid of.");
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
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403234_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Those things surely represent scary\nthings.\nBut the last thing you mentioned was\nstrange.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0403234_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "......... Meaning now.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0403234_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh, I do not get angry often, do I?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm, I wonder...?");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0403234_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I think that I try not to fly up\ninto a rage often, though.");
                Voice_PlayVoice("B0403234_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Even though I often have arguments\nwith people, I have never had a\nfight with someone.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm...");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403234_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Well, since I'm human, I\noccasionally rub people the wrong\nway.\nBut even then, I deal with it with\ncomposure.");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403234_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nUntil the other person says \"Please\nforgive me, already\".");
                Message_Who(0);
                Message_MsgDisp("主人公", "(.........\nAs expected, making\n｛Hikami＊＊｝ angry might be\nscary...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
