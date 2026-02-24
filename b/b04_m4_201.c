section "b04_m4_201"{
    int var0 = Date_GetDateOption(2, 15);
    if ((Date_Date_Nanpa() == 1) && (Parameter_GetCh1Param(4, 130) >= 4)){
        System_Call_GS2("B11", "M4", 0);
        Character_Chara_GS2(4, "M4_09F", 0, 1);
        Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_530_000", 127, 40);
        }
    else {
        Character_Chara_GS2(4, "M4_09F", 0);
        Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_530_000", 127, 40);
        System_Call_GS2("B02", "M4", 10);
        }
    if (var0 == 0){
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(4, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0404201_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "*sigh* I guess I can't get into the\nblue ocean...\nRegardless of how many people...");
        Message_MsgSel("For the time being, let's swim!", "I want to go to the beach house.", "Let's nap under the parasol.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 0, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404201_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "No way! ...\nI'll stay here, you better go alone!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 0, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404201_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "If we came here just to eat, then\ncoming to the beach was not\nnecessary...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_09F", 0, 1, 1, 34);
            Character_BlinkStart(4, 0, (#1), 2);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404201_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I agree! It's a great idea.\nLet's do that!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_ChFace(0, 0, 9);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0404201_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "*Sigh*...\nWhat are we going to do today?");
        Message_MsgSel("I want to swim off until we're floating.", "Let's play with water on the beach.", "Maybe getting tanned is cool.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404201_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "No way!\nIf you're talking about floats, I\nsaw a lifebuoy over there.\nGo get it and bring it back!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404201_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, in that case, it's alright!\nWater splashing and...\nalso, tunnel digging!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404201_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'm satisfied with myself like this!\n...\nOr should I say, I don't want to be\ntanned.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0404201_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I've always had bad memories with\nbeaches...");
        Message_MsgSel("Let me help you forget it...", "I also got bitten by a jellyfish.", "What kind of memory are you going to tell?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404201_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That's none of your business! ...\nIf I can't forget it after this\nlong, then I can't forget.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404201_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ooh... Hey, does a jellyfish bite?\nIt stings, right?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404201_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nOnce you want to try forgetting the\nbad memories, it gradually reminds\nyou.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404201_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nWhen I was a kid, we rode a boat,\ntogether with my parents, at the\nbeach.");
                Voice_PlayVoice("B0404201_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "And then, there was this huge wave\nthat overturned the boat.\nI got trapped in there.");
                Voice_PlayVoice("B0404201_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "All I remember is the thick-colored\nsea and the taste of the salty\nwater...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404201_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Since then, I can't.\nNot at the beach or at the pool.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I see, that's what happened...");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404201_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nYeah, I feel great after telling you\nall this.");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404201_D01700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... But don't tell anyone.\nThere'll be gossip about me that I\ncan't swim!");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
