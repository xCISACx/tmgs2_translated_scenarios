section "b04_m7_080"{
    int var0 = Date_GetDateOption(2, 24);
    if (var0 == 0){
        Character_Chara_GS2(7, "M7_17F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 2, (#1));
        Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
        Voice_PlayVoice("B0407080_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It's finally warm.\nWhile it is Habataki City, it feels\nand tastes like a tropical country.");
        Message_MsgSel("Are you going to give us a lesson, Sensei?", "The shape of the plant is interesting!", "It's a huge difference from tropical places.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(7, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407080_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I'm a little serious.\nWell, it's something to consider in\nthe future.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(7, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407080_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes, the evolutionary process is\ndifferent from the plants in the\ngreenhouse.\nSensei never gets tired of watching\nit.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 2, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0407080_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Aloha!\nDo I have permission to say that?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(7, "M7_17F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
        Voice_PlayVoice("B0407080_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "\"Avocado\"...\n\"Avogadro's Constant\"...");
        Message_MsgSel("A pun...?", "Oh, \"A case of the Avocado\"?", "What is Avogadro's Constant?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0407080_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes, unless I give it another twist,\nit's not completely a pun anymore.\nNow that I have seen your reaction.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407080_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "That it is!\nNow the pun is completed!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407080_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It's 6.02*10 to the 23rd power.\nIt is a fixed number to calculate\nsubstance amount.\nNow, it is mere pun material.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(7, "M7_17F", 0, 1, 0);
        Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
        Voice_PlayVoice("B0407080_G00800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Please look at this pineapple.\nThe spirals line up like scales.\nThis arrangement can be explained\nwith mathematics.");
        Message_MsgSel("This is a close up study.", "This is a bit strange.", "I think it's just a pineapple!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407080_G00900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "So, you don't have to be at a desk\nto bite in and study it.\nI'm glad that you understand.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407080_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It's not only the pineapple.\nOther plants could be examples....\nWould it be more and more strange?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(7, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0407080_G01100", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "That's impossible.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0407080_G01200", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "What a perfect example of something\nstupid to say!");
                Voice_PlayVoice("B0407080_W01300", #1, "");
                Message_Who(0);
                Message_MsgDisp("Male Student A", "Waka-chan is defeated～!");
                SoundEffect_PlayStream(2, "SE_NS_AL_910_003000");
                Character_ChFace(0, 4, 1);
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0407080_G01400", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Yes, settle down, everyone. Well...\nWhat were we talking about?");
                Voice_PlayVoice("B0407080_W01500", #1, "");
                Message_Who(0);
                Message_MsgDisp("Female Student A", "Waka-sama, the scales of the\npineapple!");
                Character_ChFace(0, 4, 1);
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0407080_G01600", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "That's right.\nThe Fibonacci number sequence is\nhidden in this arrangement...\nOh!");
                Message_Who(0);
                Message_MsgDisp("主人公", "What's the matter!?");
                Character_ChFace(0, 4, 1);
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0407080_G01700", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "I forgot to make a witty reply...");
                SoundEffect_PlayStream(2, "SS_T_00_999_M00");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝ seems to be\nshaken up a bit...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
