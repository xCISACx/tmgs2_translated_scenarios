section "b04_m3_192"{
    int var0 = Date_GetDateOption(2, 62);
    Character_Chara_GS2(3, "M3_10F", 0);
    Background_Bg_GS2("BG_TR121_WI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
    if (var0 == 0){
        Voice_PlayVoice("B0403192_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It is about time we skied.\nShould we take a look at your skill?");
        Message_MsgSel("If it's skiing, leave it to me!", "I'm alright at it.", "I can't ski at all.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 3);
                Date_InData_Date(321, 1);
                Character_Chara_GS2(3, "M3_10F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 11);
                Message_PauseSkinship();
                Voice_PlayVoice("B0403192_C00100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... This is surprising.\nIt seems like you could handle the\nadvanced course easily.");
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
                Voice_PlayVoice("B0403192_C00200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... You are belittling me.\nEven you are slipping more than I\nam.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_10F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403192_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, I am thankful for that.\nLet us both not force ourselves, and\njust enjoy ourselves.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_10F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403192_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nEven so, we have scaled quite a bit\nof the mountain.\nI admire your enthusiasm.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0403192_C00500", 3, "B0403192_C00501");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nThere are lots of ice skating places\naround here.\n｛主人公｝, let us take\ncare.");
        Message_MsgSel("Perhaps I should walk instead...", "Waaahhhhh...", "It's twinkling, how beautiful.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_10F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403192_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, that is also a good idea.\nI have no objections.\nI will accompany you.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0403192_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... I did not warn you in time.\nWait a moment, I will come save you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_10F", 0, 1, 1, 35);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403192_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, that is how it appears...\nBut even beautiful flowers have\nthorns.\nLet us not be negligent.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("", 3, "B0403192_C00900");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝, there is a\nforest course.\nShould we try going there?");
        Message_MsgSel("I want to go to the bumpy slope instead.", "Will we bump into trees...?", "Walking through it seems enjoyable.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403192_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nThen we will split up for one hour.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0403192_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh...? I oppose the bumpy slope.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Why, ｛Hikami＊＊｝...?");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403192_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "That's...\nIf you fell down on that slope, you\nwould get seriously injured.");
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403192_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Worst case scenario, if you can't\nmove, a snowmobile cannot climb that\nslope.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, definitely...");
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("B0403192_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The bumpy slope is near the summit,\nso it will take time until help\ncomes from the main area.");
                Message_Who(0);
                Message_MsgDisp("主人公", "That's also true...");
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403192_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "In other words, I cannot recommend\nthe bumpy slope.\nThe forest course is easy, so I do\nnot have to worry as much.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm, I see...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0403192_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... That is what I mean.\nNow then, let us go to the forest\ncourse at once!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...\nI feel like he's somewhat good at\npersuading people.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_10F", 0, 1, 1, 35);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403192_C01700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "If so, then there is no need to\nworry.\nI have never bumped into one.\nIt is a safe course.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_10F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403192_C01800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right!\nThe scenery in that course is very\nbeautiful.\nI think that you will surely like\nit.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(3, 0, 1);
    System_GlobalWork(5, 0, 1);
    }
