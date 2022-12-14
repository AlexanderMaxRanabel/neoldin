package me.alexandermaxranabel.monotone.module.setting.settings;

import me.alexandermaxranabel.monotone.Bedroom;
import me.alexandermaxranabel.monotone.module.Module;
import me.alexandermaxranabel.monotone.module.setting.Setting;

public class KeybindSetting extends Setting {

	public int code;

	public KeybindSetting(int code) {
		this.name = "KeyBind";
		this.code = code;
	}

	public KeybindSetting(Module module) {
		// TODO Auto-generated constructor stub
	}

	public int getKeyCode() {
		return this.code;
	}

	public void setKeyCode(int code) {
		this.code = code;

		if (Monotone.INSTANCE.save != null) {
			try {
				Monotone.INSTANCE.save.saveSettings();
			} catch (Exception e) {}
		}
	}

}
