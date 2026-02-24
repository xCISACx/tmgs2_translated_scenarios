section "b04_m2_051"{
    int var0 = Date_GetDateOption(2, 13);
    Character_Chara_GS2(2, "M2_D?F", 0, 1, 0);
    Character_ChFace(0, 2, 1);
    Character_BlinkStart(2, 2, (#1));
    Character_ChFace(0, 3, 2);
    Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0402051_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... We're high up...\nMy feet feel funny...");
        Message_MsgSel("It's like paradise floating in the sky!", "It's a giant, 360 degree panorama!", "It's not actually in the sky!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_BlinkStart(2, 0, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402051_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Paradise?\nAny scenery that is high off the\nground is like a picture of Hell for\nme.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402051_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You seem happy.\nCan we leave now?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_BlinkStart(2, 0, (#1), 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402051_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I don't care if it is or isn't.\nI want to leave this place right\nnow.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0402051_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Why are there so many people here?\n... What do they plan to do?");
        Message_MsgSel("Probably to enjoy the view from here.", "Everyone has nothing to do.", "Wow, the people on the ground look like ants!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402051_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Hmm...\nIf I look at the distant view and\nnot the ground...\nAlright, I'm fine.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402051_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nSo saying that, it means that you\nand I have nothing to do, too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("B0402051_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... And what's so fun about that?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0402051_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Hey... Why did you bring me here?");
        Message_MsgSel("I like the scenery here...", "Because the air here is fresh.", "Do you hate high places?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402051_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Is that so... Right.\nI get it, I won't say any more.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402051_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Hmm?\nIs it different to the air you\nbreathe at ground level?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402051_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Answer my question first....\nAre you trying to make me hate you?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0402051_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "......... Do I look like it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh... So you do hate it...");
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402051_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Yeah.");
                Message_Who(0);
                Message_MsgDisp("主人公", "S-Sorry.\nSo that means you've always hated\nbeing here, right...?");
                Character_BlinkStart(2, 0, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402051_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "......... Don't you like this place?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402051_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "When you look into the distance your\npupils...\nare extremely radiant...");
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("B0402051_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "And it'd kinda be a waste to destroy\nthat look...");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 4, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402051_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... I-It's nothing....\nAnyway, I don't mind staying here a\nlittle longer.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank you,\n｛Shiba＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
