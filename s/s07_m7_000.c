section "s07_m7_000"{
    if (Parameter_GetCh1Param(7, 130) <= 2){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(7, "M7_06F", 0);
        Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_EX_140_000", 127, 40);
        Voice_PlayVoice("S0707000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "As expected, it is New Year's Day.\nBusy, busy!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm, it's a very big crowd...");
        Voice_PlayVoice("S0707000_G00100", 7, "S0707000_G00101");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah, it's vacant on this side.\nLet's go, ｛主人公｝.");
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "Aah, ｛Wakaouji＊＊｝!!\nI'll get lost!");
        Message_CloseMsg();
        Character_Chara_GS2(7, "M7_06F", 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S0707000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "You're right.\nI'm sorry, we will go slowly.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I hope it's safe...)");
        }
    else if (Parameter_GetCh1Param(7, 130) == 3){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(7, "M7_06F", 0);
        Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_EX_140_000", 127, 40);
        Voice_PlayVoice("S0707000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Look at this bustle!\nI'm getting excited.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really?\nThere are a lot of people gathering!");
        Voice_PlayVoice("S0707000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "There are many stalls, too....\nOh my, what is that?");
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "Aaah, ｛Wakaouji＊＊｝!!\nI'll get lost!");
        Message_CloseMsg();
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(7, "M7_06F", 0);
        Voice_PlayVoice("S0707000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I'm sorry, I agree....\nSomehow, you seem to be better at\nbeing the teacher.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah... That's what I feel like.)");
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_06F", 0);
        Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_EX_140_000", 127, 40);
        Voice_PlayVoice("S0707000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "... Okay. We've arrived.\nYou can call out to me from here if\nI get too far ahead.");
        Message_Who(0);
        Message_MsgDisp("主人公", "That's true...\nBut you're likely to get lost in the\nconfusion, too.");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S0707000_G00700", 7, "S0707000_G00701");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I will not let such a thing happen.\nGive me your hand,\n｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh...?");
        Voice_PlayVoice("S0707000_G00800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "We'll hold hands.\nWe won't end up separated if we do\nthat.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...");
        Voice_PlayVoice("S0707000_G00900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It's fine. Now, shall we go pray?");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
