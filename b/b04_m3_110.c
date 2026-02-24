section "b04_m3_110"{
    int var0 = Date_GetDateOption(2, 31);
    Character_Chara_GS2(3, "M3_09F", 0);
    Background_Bg_GS2("BG_FP610_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_610_000", 127, 40);
    System_Call_GS2("B02", "M3", 10);
    if (var0 == 0){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0403110_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", ".........\nHow good are you at swimming?");
        Message_MsgSel("If it's swimming, leave it to me!", "I'm alright at it.", "I would like you to teach me how to swim.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 3);
                Date_InData_Date(321, 1);
                Character_Chara_GS2(3, "M3_09F", 0, 1, 1, 34);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(3, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0403110_C00100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nIt seems like I do not have to worry\nabout you.\nIt would be nice if you could swim\nsafely.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0403110_C00200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nIt seems like you should take back\nwhat you just said.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0403110_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "People who are bad at swimming do\nnot say that they are okay at it....\nYou can swim, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403110_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see, you too...\nAh, it is unfortunate, but I have\nnever taught anyone swimming before.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0403110_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I will be reading on the terrace.\nYou should go ahead and swim.");
        Message_MsgSel("Eh, you're not swimming?", "Maybe I'll go bask in the sun.", "Can't you read books at home?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0403110_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "T-That's...\nI want to continue reading no matter\nwhat!\nI cannot swim until I finish\nreading.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403110_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Will you do that?\nThe terrace is quite comfortable.\nI recommend it for taking afternoon\nnaps.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("B0403110_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nNo, it is a book that I must return\nto the library by the end of the\nday!\nSo I cannot swim right now.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(3, 2, (#1));
        Voice_PlayVoice("B0403110_C00900", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... Is there not a walking course?\nI will go take a walk there.");
        Message_MsgSel("I'll go walking with you too, then.", "Eh, come on, let's go swimming!", "You can't swim, ｛Hikami＊＊｝?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403110_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Will you do that?\nWalking in the water is affected by\nthe water pressure, so it seems like\nit will be good exercise.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(1, 2, 1);
            Character_BlinkStart(3, 3, (#1), 2);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0403110_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... No. I have already decided.\nThere is no use whining.\nI will be going on a walk today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0403110_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "W-When did I ever say that I could\nnot swim?\nI just do not swim!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403110_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nAs expected, it was something that I\ncannot hide.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Meaning...");
                Character_ChFace(0, 2, 1);
                Voice_PlayVoice("B0403110_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It is as you guessed. I...\ncannot swim.");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Voice_PlayVoice("B0403110_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Even though I can ride a bike, it is\njust different in the water...\nI cannot maintain balance.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hikami＊＊｝...\nSo then why did you come here many\ntimes if you couldn't...");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403110_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Because of you...\nIt cannot be helped at pools, but\ndon't I get to talk to you when we\ntravel to and from here?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Haha!");
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403110_C01700", 3, "B0403110_C01701");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Ah, I feel like the pressure has\nlifted....\n｛主人公｝.\nIf you are fine with walking, how\nabout we take a walk?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay, I'd be glad to!");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
